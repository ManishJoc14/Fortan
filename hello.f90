program print_number
    implicit none
    real :: number
    
    ! Prompt the user for input
    write(*,*) "Enter a number: "
    
    ! Read the number from the user
    read(*,*) number
    
    ! Print the number
    write(*,*) "You entered: ", number
    
  end program print_number
  