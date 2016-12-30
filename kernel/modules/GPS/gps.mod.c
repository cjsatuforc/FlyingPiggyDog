#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf8b65626, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa8151c7f, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0x6a3cb7a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x581cea33, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x7647726c, __VMLINUX_SYMBOL_STR(handle_sysrq) },
	{ 0xf6f08263, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x266bf67d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x19b4ea81, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0x917c554a, __VMLINUX_SYMBOL_STR(dev_pm_set_dedicated_wake_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc3a0826c, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x15e4e5f6, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb3fc188d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9338e645, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xc7967a7e, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x651db4a3, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x1af9b668, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5edce23a, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xaeffd103, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1e183341, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd2168678, __VMLINUX_SYMBOL_STR(pm_runtime_irq_safe) },
	{ 0x1187b744, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x9b67c806, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0x5544795b, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xae373079, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xae12c31a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x545163cf, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0xed38e4f4, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xa7e73029, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5dbbc9c3, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa59bb700, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x733aa277, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xd2c05d77, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xe2a63cd1, __VMLINUX_SYMBOL_STR(dev_pm_clear_wake_irq) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8bd264b8, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x39a885fe, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xc19c2738, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0xd7aa02b0, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x2ebd2c4, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x5a32de32, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x9ba76753, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xd7a73105, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xbec97192, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x15fd5686, __VMLINUX_SYMBOL_STR(uart_suspend_port) },
	{ 0x76a03f68, __VMLINUX_SYMBOL_STR(uart_resume_port) },
	{ 0x366307a, __VMLINUX_SYMBOL_STR(console_suspend_enabled) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc0fa0d21, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8fa9e048, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1c3a01a, __VMLINUX_SYMBOL_STR(oops_in_progress) },
	{ 0x1559601b, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x80b8b59, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x5ae338ba, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x2f2d3cf, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x80883441, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xd9b1b911, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x4d457127, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb617a770, __VMLINUX_SYMBOL_STR(uart_handle_dcd_change) },
	{ 0x856f9db8, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0x21659a1a, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7a9ac842, __VMLINUX_SYMBOL_STR(uart_set_options) },
	{ 0xf2fca922, __VMLINUX_SYMBOL_STR(uart_parse_options) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgps,bbb-uart*");

MODULE_INFO(srcversion, "7E015E14FAB4C08618B5B53");
