PROGRAM ArithmeticIfExample
    INTEGER :: x = 2
    INTEGER :: result
  
    ! Logical if 
    ! IF (x==2) then 
    !     result = 100
    ! else 
    !     result = 200
    ! end if 


    ! Arithmetic if 
    if(x) 100, 200, 300
  100 write(*,*) 'label 100, Negative'
    stop
  200 write(*,*) 'label 200, Zero'
    stop
  300 write(*,*) 'label 300, Positive'
    stop


  
    PRINT *, "Result:", result
  END PROGRAM ArithmeticIfExample
  