program FormattedInputOutput
    implicit none
  
    integer :: n
    real :: x, y
  
    ! Prompt user for input
    write(*,*) "Enter an integer (n):"
    read(*,*) n
    write(*,*) "Enter a real number (x):"
    read(*,*) x
  
    ! Perform a simple operation
    y = real(n) + x
  
    ! Formatted output using format specifiers
    write(*, '(A, I5,/, A, F10.3)') "n =", n, "x =", x
    write(*, '(A, F10.3)') "n + x =" , y

   ! Use / for newline and T for tab
    write(*, '(A, /, A, T1, A)') "Line 1", "Line 2", "Line 3"
  
  end program FormattedInputOutput
  