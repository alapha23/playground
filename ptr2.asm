
a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000400390 <_init>:
  400390:	48 83 ec 08          	sub    $0x8,%rsp
  400394:	48 8b 05 5d 0c 20 00 	mov    0x200c5d(%rip),%rax        # 600ff8 <__gmon_start__>
  40039b:	48 85 c0             	test   %rax,%rax
  40039e:	74 02                	je     4003a2 <_init+0x12>
  4003a0:	ff d0                	callq  *%rax
  4003a2:	48 83 c4 08          	add    $0x8,%rsp
  4003a6:	c3                   	retq   

Disassembly of section .text:

00000000004003b0 <_start>:
  4003b0:	31 ed                	xor    %ebp,%ebp
  4003b2:	49 89 d1             	mov    %rdx,%r9
  4003b5:	5e                   	pop    %rsi
  4003b6:	48 89 e2             	mov    %rsp,%rdx
  4003b9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4003bd:	50                   	push   %rax
  4003be:	54                   	push   %rsp
  4003bf:	49 c7 c0 10 05 40 00 	mov    $0x400510,%r8
  4003c6:	48 c7 c1 a0 04 40 00 	mov    $0x4004a0,%rcx
  4003cd:	48 c7 c7 87 04 40 00 	mov    $0x400487,%rdi
  4003d4:	ff 15 16 0c 20 00    	callq  *0x200c16(%rip)        # 600ff0 <__libc_start_main@GLIBC_2.2.5>
  4003da:	f4                   	hlt    
  4003db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000004003e0 <deregister_tm_clones>:
  4003e0:	55                   	push   %rbp
  4003e1:	b8 20 10 60 00       	mov    $0x601020,%eax
  4003e6:	48 3d 20 10 60 00    	cmp    $0x601020,%rax
  4003ec:	48 89 e5             	mov    %rsp,%rbp
  4003ef:	74 17                	je     400408 <deregister_tm_clones+0x28>
  4003f1:	b8 00 00 00 00       	mov    $0x0,%eax
  4003f6:	48 85 c0             	test   %rax,%rax
  4003f9:	74 0d                	je     400408 <deregister_tm_clones+0x28>
  4003fb:	5d                   	pop    %rbp
  4003fc:	bf 20 10 60 00       	mov    $0x601020,%edi
  400401:	ff e0                	jmpq   *%rax
  400403:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400408:	5d                   	pop    %rbp
  400409:	c3                   	retq   
  40040a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400410 <register_tm_clones>:
  400410:	be 20 10 60 00       	mov    $0x601020,%esi
  400415:	55                   	push   %rbp
  400416:	48 81 ee 20 10 60 00 	sub    $0x601020,%rsi
  40041d:	48 89 e5             	mov    %rsp,%rbp
  400420:	48 c1 fe 03          	sar    $0x3,%rsi
  400424:	48 89 f0             	mov    %rsi,%rax
  400427:	48 c1 e8 3f          	shr    $0x3f,%rax
  40042b:	48 01 c6             	add    %rax,%rsi
  40042e:	48 d1 fe             	sar    %rsi
  400431:	74 15                	je     400448 <register_tm_clones+0x38>
  400433:	b8 00 00 00 00       	mov    $0x0,%eax
  400438:	48 85 c0             	test   %rax,%rax
  40043b:	74 0b                	je     400448 <register_tm_clones+0x38>
  40043d:	5d                   	pop    %rbp
  40043e:	bf 20 10 60 00       	mov    $0x601020,%edi
  400443:	ff e0                	jmpq   *%rax
  400445:	0f 1f 00             	nopl   (%rax)
  400448:	5d                   	pop    %rbp
  400449:	c3                   	retq   
  40044a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400450 <__do_global_dtors_aux>:
  400450:	80 3d c9 0b 20 00 00 	cmpb   $0x0,0x200bc9(%rip)        # 601020 <__TMC_END__>
  400457:	75 17                	jne    400470 <__do_global_dtors_aux+0x20>
  400459:	55                   	push   %rbp
  40045a:	48 89 e5             	mov    %rsp,%rbp
  40045d:	e8 7e ff ff ff       	callq  4003e0 <deregister_tm_clones>
  400462:	c6 05 b7 0b 20 00 01 	movb   $0x1,0x200bb7(%rip)        # 601020 <__TMC_END__>
  400469:	5d                   	pop    %rbp
  40046a:	c3                   	retq   
  40046b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400470:	f3 c3                	repz retq 
  400472:	0f 1f 40 00          	nopl   0x0(%rax)
  400476:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40047d:	00 00 00 

0000000000400480 <frame_dummy>:
  400480:	55                   	push   %rbp
  400481:	48 89 e5             	mov    %rsp,%rbp
  400484:	5d                   	pop    %rbp
  400485:	eb 89                	jmp    400410 <register_tm_clones>

0000000000400487 <main>:
  400487:	55                   	push   %rbp
  400488:	48 89 e5             	mov    %rsp,%rbp
  40048b:	48 c7 45 f8 90 10 60 	movq   $0x601090,-0x8(%rbp)
  400492:	00 
  400493:	b8 00 00 00 00       	mov    $0x0,%eax
  400498:	5d                   	pop    %rbp
  400499:	c3                   	retq   
  40049a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004004a0 <__libc_csu_init>:
  4004a0:	41 57                	push   %r15
  4004a2:	41 56                	push   %r14
  4004a4:	49 89 d7             	mov    %rdx,%r15
  4004a7:	41 55                	push   %r13
  4004a9:	41 54                	push   %r12
  4004ab:	4c 8d 25 9e 09 20 00 	lea    0x20099e(%rip),%r12        # 600e50 <__frame_dummy_init_array_entry>
  4004b2:	55                   	push   %rbp
  4004b3:	48 8d 2d 9e 09 20 00 	lea    0x20099e(%rip),%rbp        # 600e58 <__init_array_end>
  4004ba:	53                   	push   %rbx
  4004bb:	41 89 fd             	mov    %edi,%r13d
  4004be:	49 89 f6             	mov    %rsi,%r14
  4004c1:	4c 29 e5             	sub    %r12,%rbp
  4004c4:	48 83 ec 08          	sub    $0x8,%rsp
  4004c8:	48 c1 fd 03          	sar    $0x3,%rbp
  4004cc:	e8 bf fe ff ff       	callq  400390 <_init>
  4004d1:	48 85 ed             	test   %rbp,%rbp
  4004d4:	74 20                	je     4004f6 <__libc_csu_init+0x56>
  4004d6:	31 db                	xor    %ebx,%ebx
  4004d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4004df:	00 
  4004e0:	4c 89 fa             	mov    %r15,%rdx
  4004e3:	4c 89 f6             	mov    %r14,%rsi
  4004e6:	44 89 ef             	mov    %r13d,%edi
  4004e9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4004ed:	48 83 c3 01          	add    $0x1,%rbx
  4004f1:	48 39 dd             	cmp    %rbx,%rbp
  4004f4:	75 ea                	jne    4004e0 <__libc_csu_init+0x40>
  4004f6:	48 83 c4 08          	add    $0x8,%rsp
  4004fa:	5b                   	pop    %rbx
  4004fb:	5d                   	pop    %rbp
  4004fc:	41 5c                	pop    %r12
  4004fe:	41 5d                	pop    %r13
  400500:	41 5e                	pop    %r14
  400502:	41 5f                	pop    %r15
  400504:	c3                   	retq   
  400505:	90                   	nop
  400506:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40050d:	00 00 00 

0000000000400510 <__libc_csu_fini>:
  400510:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400514 <_fini>:
  400514:	48 83 ec 08          	sub    $0x8,%rsp
  400518:	48 83 c4 08          	add    $0x8,%rsp
  40051c:	c3                   	retq   
