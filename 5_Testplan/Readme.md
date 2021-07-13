# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_1       |Check if the User selects an option from the available choices, and if want to add book from the Library give the details like id,Name,phone number,e-mail|User's choice, an integer and character| SUCCESS| SUCCESS|Requirement based |
|  H_2       |Check if the User selects an option from the available books, and if want to add book to the account give the details like User id and book id|User's choice, an integer  |  SUCCESS|SUCCESS|Requirement based |
|  H_3        | If the book having any missing pages or less information, if want to reaise issue give the details like User id and book id     |user choice as an Integre and character| PASS | SUCCESS|Technical
|  H_4     |If the user want to return the book, then select the option as return and click which book want to return then check the dues if any|Display in a account dashboard|SUCCESS|SUCCESS|Required based |


## Low level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_1       |When choosing from the options, check if the input is valid or invalid|  User's Choice|Invalid Message/ Invoke the process|SUCCESS|Scenario based |
|  L_2       |Check that the details of the user all the required columns are filled |user choice| SUCCESS|SUCCESS|Scenario based    |
|  L_3       |Check user's choice when selects dispaly list of the view books| SUCCESS|SUCCESS|SUCCESS|Scenario based    |
|  L_4       |If the Book is available | user gives integer as book id|Already Exists|Already Exists|Scenario based    |
