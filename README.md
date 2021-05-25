# Calender_Print_by_StartDay

Problem: To print the calendar by getting number of first day of year. Saturday is the start of every week and equals 0 and Friday the last day of every week equals 6.
the last day of Esfand is 30th.

Here, we are given a day number and we want to print the jalali calendar by that number.

The year calendar shows all days, months on every date of the month. And here we will create a program that will return the calendar with given number!

For this, we will need some calculations like,

Start Day of every month.

Farvardin, Ordibehesht, Khordad, Tir, Mordad, Shahrivar has 31 days and

Mehr , Aabaan, Aazar, Dey, Bahman, Esfand has 30 days.

The Output Should be like this by getting 4 as input:


           "Farvardin"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                        1    2    3
    4    5    6    7    8    9   10
   11   12   13   14   15   16   17
   18   19   20   21   22   23   24
   25   26   27   28   29   30   31


           "Ordibehesht"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

    1    2    3    4    5    6    7
    8    9   10   11   12   13   14
   15   16   17   18   19   20   21
   22   23   24   25   26   27   28
   29   30   31

           "Khordad"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                   1    2    3    4
    5    6    7    8    9   10   11
   12   13   14   15   16   17   18
   19   20   21   22   23   24   25
   26   27   28   29   30   31

           "Tir"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31

           "Mordad"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30   31

           "Shahrivar"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30
   31

           "Mehr"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

    1    2    3    4    5    6    7
    8    9   10   11   12   13   14
   15   16   17   18   19   20   21
   22   23   24   25   26   27   28
   29   30

           "Aabaan"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                   1    2    3    4
    5    6    7    8    9   10   11
   12   13   14   15   16   17   18
   19   20   21   22   23   24   25
   26   27   28   29   30   31

           "Aazar"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31

           "Dey"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30   31

           "Bahman"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30
   31

           "Esfand"
   Sat  Sun  Mon  Tue  Wed  Thu  Fri

         1    2    3    4    5    6
    7    8    9   10   11   12   13
   14   15   16   17   18   19   20
   21   22   23   24   25   26   27
   28   29   30   31
