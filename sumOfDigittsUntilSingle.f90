recursive function sumCalc(num) result(result)
    integer, intent(in) :: num
    integer :: rem, sum=0
    integer :: localNum ! Declare local variable
    localNum = num

    if (num < 10) then
        result = num
        return
    end if

    do while (localNum /= 0)
        rem = mod(localNum, 10)
        sum = sum + rem
        localNum = localNum / 10
    end do

    result = sumCalc(sum)
end function sumCalc

program Sum_Of_Digit_Until_Single
    integer :: num, sum

    write(*, *) "Enter any number: "
    read (*, *) num

    sum = sumCalc(num)
    write(*, *) "Sum of digits until single digit is:", sum

end program Sum_Of_Digit_Until_Single
