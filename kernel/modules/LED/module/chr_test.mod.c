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
	{ 0x5c827ecc, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefc7ffca, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7275d8b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9a139dde, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xd99ecc59, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd95646f1, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3e85a178, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x5ea3180f, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x38c49e15, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "01D299E14D76CE1170675DF");
