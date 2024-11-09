#ifndef ST_SPOOF_CALL_H
#define ST_SPOOF_CALL_H

namespace ST
{
	namespace Spoof
	{
		static const unsigned __int64 Key = 0x2C53A61D1FB8AD59;

		__forceinline __attribute__((naked)) void DecryptStack()
		{
			__asm
			{
				mov rcx, [rsp]
				xor rcx, Key
				rol rcx, 0x16
				add rsp, 0x100
				mov [rsp], rcx
				ret
			}
		}

		template <typename Func, typename... Args>
		__forceinline __attribute__((naked)) void Call(Func* function, Args... args)
		{
			__asm
			{
				sub rsp, 0x100
				lea rax, DecryptStack
				push rax
				mov rax, rcx
				mov rcx, [rsp+0x108]
				ror rcx, 0x16
				xor rcx, Key
				mov [rsp+0x8], rcx
				mov rcx, rdx
				mov rdx, r8
				mov r8, r9
				mov r9, [rsp+0x130]
				jmp rax
			}
		}
	}
}

#endif