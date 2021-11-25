/**
 * @file record.h
 * @author Anusha Hiremath (anusha.hiremath@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STUDENT_RECORD_H_
#define __STUDENT_RECORD_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for student record
 * 
 */

/**
 * @brief  return type for function for unit testing
 * 
 */
typedef enum test_values{
    pass = 1;
    fail = 0;
}test_values;

/**
 * @brief function to find a operation record_operations
 * 'H','h'
 * @return test_values
 * 
 */

test_values void gotoxy();

/**
 * @brief function to perform position
 * switch(record_oprn)
 * @return test_values
 */

test_values void menu();

/**
 * @brief function to perform  menu options
 * switch(record_oprn)
 * @return test_values
 */

test_values void add();

/**
 * @brief function to perform add information
 * switch(record_oprn)
 * @return test_values
 */

test_values void view();

/**
 * @brief function to View the details
 * switch(record_oprn)
 * @return test_values
 */
test_values void deleterec();

/**
 * @brief function to perform delete record
 * switch(record_oprn)
 * @return test_values
 */

test_values void modify();
/**
 * @brief function to perform modify details
 * switch(record_oprn)
 * @return test_values
 */
test_values void search();

/**
 * @brief function to search details
 * switch(record_oprn)
 * @return test_values
 */



#endif



