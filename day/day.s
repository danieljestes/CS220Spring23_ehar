/*
 *  Day 
 *    Give a day, month, and year the day of the week it fell
 *    on can be calculated as follows:  (0 - Sunday, 6 - Saturday)
 *
 * 
 *    y0 = y - (14 - m) / 12
 *    x = y0 + y0/4 - y0/100 + y0/400    leap year
 *    m0 = m + 12 * ((14 - m) / 12) - 2
 *    d0 = (d + x + (31 * m0)/ 12) % 7
 *
 *    d 0 is the final result
 *
 *    Feb 14, 2000 fell on Monday   d0 = 1 
 *
 */

.text   // start of the code segment
