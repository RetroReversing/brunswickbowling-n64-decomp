/* identical to __osDequeueThread in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80051CC0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800B1C10 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osDequeueThread in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* Remove thread from its queue. */
void __osDequeueThread(void **queue, void *thread) { void *cur = *queue; while (cur) { if (cur == thread) { *queue = *(void **)cur; return; } queue = cur; cur = *(void **)cur; } }
