extern void injectDylibViaRop(task_t task, pid_t pid, const char* dylibPath, vm_address_t allImageInfoAddr);
extern int preflightDylibViaRop(task_t task, pid_t pid, const char* dylibPath, vm_address_t allImageInfoAddr);