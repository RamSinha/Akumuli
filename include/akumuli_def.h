#ifndef AKUMULI_DEF_H
#define AKUMULI_DEF_H

// Write status

//! Succesfull write
#define AKU_WRITE_STATUS_SUCCESS 0
//! Page overflow during write
#define AKU_WRITE_STATUS_OVERFLOW 1
//! Invalid input
#define AKU_WRITE_STATUS_BAD_DATA 2



// Cursor states

#define AKU_CURSOR_START 0
#define AKU_CURSOR_SEARCH 1
#define AKU_CURSOR_SCAN_BACKWARD 2
#define AKU_CURSOR_SCAN_FORWARD 3
#define AKU_CURSOR_COMPLETE 3

#endif