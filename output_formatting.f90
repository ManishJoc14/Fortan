program output_formatting
    implicit none
    integer :: num = 12
    INTEGER :: a = 10, b = 20

    
    !   12
    !write (*,'(I5)') num  ! it prints num with total field witdth of 5 a, so there is 3 spaces and 12 as output 
    
    ! WRITE (*, '(I5, 3X)') num

   ! write (*,*) num, num !prints in a single line 

   

end program output_formatting