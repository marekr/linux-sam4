#include <linux/kernel.h>

#include <asm/v7m.h>

#include <asm/mach/arch.h>

static const char *const sam4e_dt_board_compat[] __initconst = {
	"atmel,sam4e",
	NULL
};

DT_MACHINE_START(sam4e_dt, "Atmel SAM4E (Device Tree)")
	.dt_compat = sam4e_dt_board_compat,
	.restart = armv7m_restart,
MACHINE_END
