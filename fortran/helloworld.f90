!
!       HELLO WORLD
!
!       implicit removes pre-settings

program hellomain
        implicit none
        integer :: a ,b,c,d,e,f
        character(4) ::g
        g = 'cat'
        a = 4
        b = 5
        c = 6
        d = 4
        e = 5
        f = 6
        PRINT*,"HELLO WORLD"
        PRINT*, a, b ,c
        PRINT*, d, e ,f
        PRINT*, g


END program hellomain
