#include "common.h"

_RegSet* do_syscall(_RegSet *r);
_RegSet* schedule(_RegSet *prev);

static _RegSet* do_event(_Event e, _RegSet* r) {
  switch (e.event) {
    case _EVENT_SYSCALL:
      do_syscall(r);
      break;
    case _EVENT_TRAP:
      schedule(r);
      break;
    case _EVENT_IRQ_TIME:
      schedule(r);
      break;
    default:
      panic("Unhandled event ID = %d", e.event);
  }

  return NULL;
}

void init_irq(void) {
  _asye_init(do_event);
}
