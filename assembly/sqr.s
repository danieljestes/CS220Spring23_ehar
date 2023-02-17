// Our first assembly file

// The symbol sqr will bew exported from this file.
// Made visible to outside files
// .global is an example of an assembler directive
.global sqr

// marking the start of the instructions
// The "text" segment
.text

// Defining the label sqr. A label gives a name to 
// a line (location) in the file.
sqr:
    mul r0, r0, r0
    bx lr    // branch and exchange lr, the link register
