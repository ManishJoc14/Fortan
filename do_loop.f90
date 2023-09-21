program do_loop
    implicit none 
    integer :: i,j

    
    ! do i=1, 10, 2
    !     print *, i
    ! end do

    do 1, i=1, 2
        do 2, j=1, 5
            print *, i,'*',j,'=',i*j
        2 continue
    1 continue

end program do_loop