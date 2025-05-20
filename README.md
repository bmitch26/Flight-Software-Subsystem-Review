# Flight-Software-Subsystem-Review
Adding review of core computer architecture concepts for flight software and embedded systems
Topics:
- Memory Hierarchy: RAM vs. flash vs. registers - constrained onboard, so memory use is critical
- Instruction Set (ISA): Understanding ARM/RISC-V for embedded instruction-level optimization
- Interrupts: Event-driven tasks (e.g. timers, sensor triggers, UART)
- Task Scheduling: RTOS priority queues, preemption (e.g. rate monotonic scheduling)
- Timers and Clocks: Needed for real-time control, scheduling and telemetry intervals
- Watchdog Timers: Fault detection - resets MCU if software freezes or misbehaves
- Bus Architecture: Knowing how peripherals communicate (UART, SPI, I2C, CAN)
- DMA (Direct Memory Access): Allows peripherals to move data without CPU load - critical for efficiency
- Registers vs Memory: Low-level control (setting pin modes, baud rates, etc)
- Bitwise Operations: Used constantly in embedded logic and driver code (e.g. masking bits)
