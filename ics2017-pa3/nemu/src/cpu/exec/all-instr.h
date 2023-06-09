#include "cpu/exec.h"

make_EHelper(mov);

make_EHelper(operand_size);

make_EHelper(inv);
make_EHelper(nemu_trap);

//Data Movement
make_EHelper(push);
make_EHelper(pop);
make_EHelper(leave);
make_EHelper(cltd);
make_EHelper(cwtl);
make_EHelper(movsx);
make_EHelper(movzx);
make_EHelper(pusha);
make_EHelper(popa);

//Binary Arithmetic
make_EHelper(add);
make_EHelper(inc);
make_EHelper(sub);
make_EHelper(dec);
make_EHelper(cmp);
make_EHelper(neg);
make_EHelper(adc);
make_EHelper(sbb);
make_EHelper(mul);
make_EHelper(imul1);
make_EHelper(imul2);
make_EHelper(div);
make_EHelper(idiv);

//Logical
make_EHelper(not);
make_EHelper(and);
make_EHelper(or);
make_EHelper(xor);
make_EHelper(sar);
make_EHelper(shl);
make_EHelper(shr);
make_EHelper(rol);
make_EHelper(setcc);
make_EHelper(test);

//Control Transfer
make_EHelper(jmp);
make_EHelper(jcc);
make_EHelper(call);
make_EHelper(jmp_rm);
make_EHelper(ret);
make_EHelper(call_rm);

//Miscellaneous
make_EHelper(lea);
make_EHelper(nop);

//System
make_EHelper(in);
make_EHelper(out);
make_EHelper(lidt);
make_EHelper(int);
make_EHelper(iret);














