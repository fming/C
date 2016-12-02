=====================================
 How to execute this sample of CSUB
=====================================

------------------------------------------------------
 files

  use_csub_1.asc       RMB program which call CSUB
  my_csub.c            source of CSUB
  Makefile
------------------------------------------------------

 % make

   -> libmy_csub.so

 % rmbbuildc

   <- input as rmbbuildc.log

   -> my_csub
      my_csub.st    (*1)

 % rmb &

 [In rmb terminal]

  GET "use_csub_1.asc"
  RUN


(*1) All you input during rmbbuildc are recorded in this stream file.
     You can reuse this like :

       % rmbbuildc < my_csub.st

     In this case, you don't need to input anything.


-----





