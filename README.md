# STSpoofCall
Spoof call stack for make reversing harder.

If analyze DecryptStack function, reverser can track original function.

Add mutation for prevent it.

Only supports up to 4 args.
If you want to use more args, add args in stack. [rsp+0x20]... +0x8...


## How to use
  using namespace ST;
  Spoof::Call(&function, param1, param2, param3, param4);
