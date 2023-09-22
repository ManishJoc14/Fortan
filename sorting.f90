program sorting
    implicit none
    integer, parameter :: max_size = 100
    integer :: arr(max_size)
    integer :: i, j, temp, n

    ! Ask the user for the size of the array
    write(*, *) "Enter the size of the array (up to ", max_size, " elements):"
    read(*, *) n

    ! Check if the entered size is within bounds
    if (n <= 0 .or. n > max_size) then
        write(*, *) "Invalid array size."
        stop
    end if

    ! Ask the user for array elements
    write(*, *) "Enter", n, "array elements:"
    do i = 1, n
        read(*, *) arr(i)
    end do

    ! Bubble sort in descending order
    do i = 1, n
        do j = 1, n - i
            if (arr(j) < arr(j+1)) then
                temp = arr(j)
                arr(j) = arr(j+1)
                arr(j+1) = temp
            end if
        end do
    end do

    ! Display sorted array
    write(*, *) "Array elements after sorting:"
    do i = 1, n
        write(*, *) arr(i)
    end do

end program sorting
