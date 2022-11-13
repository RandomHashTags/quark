//
//  event_manager.c
//  quark
//
//  Created by Evan Anderson on 11/5/22.
//

#include <stdio.h>
#include "event_manager.h"
#include "../utilities.h"

_Bool event_manager_call_event(struct Event *event) {
    printf("called event %d\n", event->type);
    return 1;
}
