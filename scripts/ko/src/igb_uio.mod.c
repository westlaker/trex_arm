#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x660fd6f1, "module_layout" },
	{ 0xd9f7574f, "param_ops_charp" },
	{ 0x5c454dbb, "pci_unregister_driver" },
	{ 0x7d9aa1fb, "__pci_register_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xd85d9c64, "uio_unregister_device" },
	{ 0xb8613c84, "dma_free_attrs" },
	{ 0xdcb764ad, "memset" },
	{ 0x38157e67, "dma_alloc_attrs" },
	{ 0xd6d29ea4, "_dev_info" },
	{ 0xde6bc522, "_dev_notice" },
	{ 0x7dd4964b, "pci_irq_vector" },
	{ 0xd49d8897, "__dynamic_dev_dbg" },
	{ 0x9879aada, "pci_disable_msix" },
	{ 0xdaca81bf, "cpu_hwcaps" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xf3ecac14, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2be7e2c, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xc410dcc4, "_dev_err" },
	{ 0x27898365, "sysfs_remove_group" },
	{ 0x93f48dc0, "__uio_register_device" },
	{ 0x32179e8, "sysfs_create_group" },
	{ 0x440f6a39, "pci_alloc_irq_vectors_affinity" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xa06cdf11, "dma_set_coherent_mask" },
	{ 0xf3c0ce96, "dma_set_mask" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0xaab29ecd, "pci_enable_device" },
	{ 0x2759372a, "kmem_cache_alloc_trace" },
	{ 0xb72083f5, "kmalloc_caches" },
	{ 0xa8b76343, "pci_check_and_mask_intx" },
	{ 0x3240ab23, "pci_intx" },
	{ 0x7ca2eeab, "pci_cfg_access_unlock" },
	{ 0x91bd3782, "pci_cfg_access_lock" },
	{ 0x32c3ff7, "pci_set_master" },
	{ 0x913b96c2, "pci_reset_function" },
	{ 0xe604d087, "pci_clear_master" },
	{ 0xd95c986f, "remap_pfn_range" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e017a56, "pci_enable_sriov" },
	{ 0xed62037a, "pci_disable_sriov" },
	{ 0xf35f886e, "pci_num_vf" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "6D34CF7C770C98CFBAAC71F");
