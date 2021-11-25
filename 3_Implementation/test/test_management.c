#include"record.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void gotoxy(void){
    TEST_ASSERT_EQUAL(pass,gotoxy());
}

void menu(void){
    TEST_ASSERT_EQUAL(pass,menu());
}

void view(void){
    TEST_ASSERT_EQUAL(pass,data view(" "));
    

void modify(void){
    TEST_ASSERT_EQUAL(pass,modify());
}        

void deleterec(void){
    TEST_ASSERT_EQUAL(pass,deleterec());
}

void add(void){
    TEST_ASSERT_EQUAL(pass,add(name));
}

void search(void){
    TEST_ASSERT_EQUAL(pass,search(value));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_gotoxy);
    RUN_TEST(test_add);
    RUN_TEST(test_view);
    RUN_TEST(test_search);
    RUN_TEST(test_modify);
    RUN_TEST(test_deleterec);
    RUN_TEST(test_menu);
    
    return UNITY_END();
}