program palindrome 
    implicit none 
    integer ::  num, copyNum, digit, rev = 0

    !Take user's input 
    print *, "Enter any number "
    read *, num
    copyNum = num

    ! find reverse 
    do while (num /= 0)
        digit = mod(num,10)    ! digit = num - (num/10) * 10
        rev = rev * 10 + digit
        num = num / 10
    end do

    !check
    if(copyNum == rev ) then
    print *, rev," is palindrome "
    else 
        print *, copyNum , " is not a palindrome"
    end if

end program palindrome