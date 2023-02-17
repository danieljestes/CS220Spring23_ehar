/*
 *  Convert s to upper case modifying s and not allocating 
 *  a new string. The string s must not be a constant.
 */
extern void upper(char s[]); // bad!!!!!!!!! Major security issue 
