# Flight-Software-Subsystem-Review
Review of core computer architecture concepts for flight software and embedded systems.

| Topic                          | Why it is important                                                          |
| ------------------------------ | ---------------------------------------------------------------------------- |
|   Memory Hierarchy             | RAM vs. flash vs. registers — constrained onboard, so memory use is critical |
|   Instruction Set (ISA)        | Understanding ARM/RISC-V for embedded instruction-level optimization         |
|   Interrupts                   | Event-driven tasks (e.g., timers, sensor triggers, UART)                     |
|   Task Scheduling              | RTOS priority queues, preemption (e.g., Rate Monotonic Scheduling)           |
|   Timers & Clocks              | Needed for real-time control, scheduling, and telemetry intervals            |
|   Watchdog Timers              | Fault detection — resets MCU if software freezes or misbehaves               |
|   Bus Architecture             | Knowing how peripherals communicate (UART, SPI, I2C, CAN)                    |
|   DMA (Direct Memory Access)   | Allows peripherals to move data without CPU load — critical for efficiency   |
|   Registers vs Memory          | Low-level control (setting pin modes, baud rates, etc.)                      |
|   Bitwise Operations           | Used constantly in embedded logic and driver code (e.g., masking bits)       |



Summarized High-Important Topics in Space Systems. Important to know how each component here interrelates.

| Topic                 | Why it is important                           | Keywords to review         |
| --------------------- | --------------------------------------------- | -------------------------- |
| RTOS + Scheduling     | Determinism in critical software              | RMS, MLFQ, ISRs            |
| CCSDS Protocols       | Space comms formatting                        | TM/TC, space packets       |
| Fault Recovery (FDIR) | System must recover from errors               | watchdog, safe mode        |
| Embedded Protocols    | Internal hardware communication               | UART, SPI, I2C, CAN        |
| Modulation & RF       | How your software gets to Earth               | BPSK, Ka-band              |
| Computer Architecture | Efficient low-level code                      | registers, memory map      |
| Software Validation   | You can’t test in orbit — simulate everything | HIL, CI, unit tests        |
| C&DH Subsystem Logic | Core of FSW operations                        | telemetry, command handler |
