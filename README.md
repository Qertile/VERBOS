# VERBOS - Very Basic Operating System
---

- using timer interrupt / systick to build a scheduler

- FSW simulator
    - Process Scheduling: Preemptive Round Robin
    - Process structure
        - name/ID
        - priority
    - Preemption flow
        - when interrupt, raise a flag in irq handler(Pend SV?), provide PID for request (regist in a struct), leave handler
        - if (flag), process 0 modify its priority (based on urgency level), and clear the flag
        - reset its priority after execution
    - Lower Priority
    - Priority
        - CMD Handling
        - Bus Service (mode/SoC)
        - Payload Control

- Context switch (set steps in the process, and record the last step)

- Inter Process Communication (IPC)
    - share memory + target PID
