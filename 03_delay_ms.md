# Custom delay_ms() Implementation

## Clock reasoning

- ATmega328P runs at **16 MHz**
- 1 clock cycle = **62.5 ns**

To calculate how many clock cycles are in 1 millisecond:

1 ms = 1,000,000 ns  
1,000,000 ns / 62.5 ns = **16000 clock cycles**

Assuming each loop iteration ≈ 4 CPU cycles:

16000 / 4 = **4000 iterations** per millisecond.

### Implementation concept

- Use an outer loop that repeats `ms` times.
- Use an inner loop that runs ~4000 iterations.
- Inside the inner loop, execute a `nop` instruction (`__asm__("nop")`), which takes exactly one CPU cycle.

This produces an approximate millisecond delay without using `_delay_ms()` and demonstrates how timing works at the register/clock level.
