function square(X_inp) result( x_SQ ) ! It returns value through result 

    real,intent(in) :: X_inp
    real ::  x_SQ
    x_SQ = X_inp * X_inp
    
end function square


subroutine cube(x,x_cubed) ! It changes value a vriable 

    real, intent(in):: x
    real, intent(out):: x_cubed
    x_cubed = x*x*x

end subroutine cube 


program main_program

    real :: x, x_squared,x_cubed
    x = 5.0

    ! Call the function to calculate the square
    x_squared = square(x)
    call cube(x,x_cubed)

    write(*, *) "The square of", x, "is", x_squared
    write(*, *) "The cube of", x, "is", x_cubed

end program main_program
