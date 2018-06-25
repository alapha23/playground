
malloc at d1-minimal.c

	__libc_memalign@plt

d1-object.c
	_d1_new_object

	memmove() at 133	in ../sysdeps/x86_64/multiarch/../multiarch/memmove-vec-unaligned-erms.S

	_d1_new_object

d1_main at rtld.c

	_d1_add_to_namespace_list at d1-object.c

	rtld_lock_default_lock_recursive

	_d1_add_to_namespace_list at d1-object.c

	rtld_lock_default_unlock_recursive at rtld.c

d1_main at rtld.c
	strcmp 

	elf_get_dynamic_info in get-dynamic-info.h

d1_main at rtld.c

	_d1_setup_hash at d1-lookup.c

	setup_vdso

	_d1_new_object

	strlen

	_d1_new_object

calloc at d1-minimal.c:101 


done

malloc at d1-minimal.c

	__libc_memalign at d1-minimal.c

	memmove
	_d1_new_object in d1-object.c
	setup_vdso

	elf_get_dynamic_info

	setup_vdso
	elf_get_dynamic_info

	_d1_setup_hash	at d1-lookup.c:959

	setup_vdso

	strlen

	setup_vdso at setup-vdso.h

done

malloc at d1-minimal.c:92

	__libc_memalign at d1-minimal.c:53

	setup_vdso at setup-vdso.h:94

	memmove

	_d1_add_to_namespace_list at d1-object.c:32

	rtld_lock_default_lock_recursive at rtld.c:782

	rtld_lock_default_unlock_recursive (lock=0x7ffff7ffd970 <_rtld_global+2352>)
	setup_vdso

	d1_main
	_d1_discover_osversion ../sysdeps/unix/sysv/linux/dl-sysdep.c:45






