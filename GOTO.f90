program goto_Statement 
    implicit none 
    integer :: n 

    write(*,*) " Enter n  "
    read(*,*) n

    ! Unconditional GOTO 
    if(n.gt.0) then
        GOTO 100
    else 
        GOTO 200
    end if 

    100 write(*,*) " label 100 "
    stop
    200 write(*,*) " label 200 "
    stop

    
    !Conditional GOTO 
    goto (100, 200, 300), n 
    ! if n is 1 goto 100 , 
    ! if n is 2 goto 200,
    ! if n is 3 goto 300

    100 write(*,*) 'label 100'
      stop
    200 write(*,*) 'label 200'
      stop
    300 write(*,*) 'label 300'
      stop

end program goto_Statement