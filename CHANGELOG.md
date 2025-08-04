# VERBOS
An project that aim to develope a minimal OS-like architecture in STM32F411 discovery dev board

-----------------------------------
## Unreleased v0.1.# (2025.##.##) @master
### New
### Changed
### Removed 
### Deprecated
### Fixed
### Known Issues
### Notes
### Reference

-----------------------------------
## VERBOS v0.1.1 (2025.08.04) @master
### New
- create variables in each process
  
### Known Issues
- process does not switch when scheduler switch to next process if the original process has not finished

-----------------------------------
## VERBOS v0.1.0 (2025.07.31) @master
### New
- using STM32F411 Discovery Kit
- create `Os_Delay()` and reset SysTick to 1kHz
### Changed
- move LED blink to SysTick Handler and set to 10 Hz


-----------------------------------
## VERBOS v0.0.5 (2024.08.06) @master
### New
- implement preemptive system in PCB
- implement hard realtime preemption
### Changed
- rename `prioity` in pcb_t and process_t into `preempt_pid`
### Known Issues
- the preempt process won't get a full process time, it share the process time with the preempted process
- it won't return to the preempted process

-----------------------------------
## VERBOS v0.0.4 (2024.08.01) @master
### New
- create a PCB structure instead of using p0
- implement preemption by modify `next_pid`
- need a interrupt to test preemption
### Fixed
- User button does not trigger the GPIO External interrupt
- The GPIO EXT IRQ is triggered when program start/reset
#### Solution
- Do not set pull-up or pull-down on the GPIO pin

-----------------------------------
## VERBOS v0.0.3 (2024.07.30) @master
### New
- add user button as GPIO interrupt
### Changed
- change p0 to pcb, create pcb_t, and remove p0
- rename `process_0()` to `ProcessControl()`


-----------------------------------
## VERBOS v0.0.2 (2024.07.17) @master
### New
- create next_pid 
- switch process by `next_pid` instead of `current_pid`


-----------------------------------
## VERBOS v0.0.1 (2024.07.17) @master
### New
- creat all
- realized basic Round Robin by SysTick Handler
- realized basic process/task concept




