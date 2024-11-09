# SpoofCall
Spoof call stack for make reversing harder.

If analyze DecryptStack function, reverser can track original function.

Add mutation for prevent it.

Only supports up to 4 args.
If you want to use more args, add args in stack. [rsp+0x20]... +0x8...


## How to use
    using namespace ST;
    Spoof::Call(&function, param1, param2, param3, param4);

## Tested result
Original:

![Original](https://github.com/user-attachments/assets/afa6598e-75f0-40f8-88ba-e8c1097ca9f7)

Encrypted:

![EncryptedRet](https://github.com/user-attachments/assets/608659eb-9289-4dae-8ebc-9cd527a7707e)

Spoofed Stack:

![SpoofedStack](https://github.com/user-attachments/assets/b414a398-528d-4d1a-9148-24db6f359dcc)
