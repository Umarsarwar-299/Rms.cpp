# Rms.cpp
Recipe Management system
C++ Program Report: Recipe Management System

Overview

This C++ program implements a simple Recipe Management System that allows a user to input multiple recipes, store their ingredients and instructions, and display the saved recipes. It uses object-oriented programming principles like encapsulation, composition, and abstraction.



Functionality



User Input:



The program prompts the user for the number of recipes they want to add.




For each recipe, it collects the title, instructions, and a list of ingredients.








Storage:



Recipes and their ingredients are stored in custom classes (Recipe, Ingredient).




A User class manages saved recipes.








Display:



All saved recipes are displayed with formatted output, including ingredients and cooking instructions.











Class Descriptions

1. Ingredient



Attributes:



name: Name of the ingredient.




quantity: Quantity required.








Methods:



Constructor for initialization.




display(): Outputs the ingredient in a readable format.









2. Recipe



Attributes:



title: Recipe title.




instructions: Steps to prepare the dish.




ingredients: A vector to store multiple Ingredient objects.








Methods:



Constructor for initialization.




addIngredient(): Adds an ingredient to the list.




display(): Prints the recipe with ingredients and instructions.




getTitle(): Returns the recipe title.









3. User



Attributes:



username: Name of the user.




savedRecipes: A vector to store the user's recipes.








Methods:



Constructor for initialization.




saveRecipe(): Adds a recipe to the saved list.




showSavedRecipes(): Displays all recipes saved by the user.









4. MealPlan



Attributes:



day: Day of the week for the plan.




recipe: The associated recipe for the day.








Methods:



Constructor and display() to show meal plan info.








Note: Currently unused in main(), could be integrated for full functionality.







Strengths



Demonstrates OOP concepts effectively.




Well-structured and easy to understand.




Interactive and user-friendly.




Scalable for additional features (e.g., meal planning, categories, nutrition info).







Suggestions for Improvement



MealPlan Integration:



Include meal plan creation and display in main().








Error Handling:



Add validation for user input (e.g., numeric values for ingredient count).








Persistence:



Save recipes to a file or load from one using file I/O for long-term storage.








Ingredient Class Enhancement:



Use separate fields for quantity and units for better parsing and operations.








UI Improvements:



Add menu options for better control (e.g., view, add, delete recipes).








Modularity:



Split classes and main function into separate files for maintainability.


         Key Features:
Composition:

A Recipe has a collection of Ingredient objects.

A User has a collection of Recipe objects.

A MealPlan has a Recipe.

This mirrors real-world relationships well.

2. Class Interaction and Modularity:

The code modularizes functionality cleanly:

Ingredient handles ingredient data.

Recipe builds on ingredients and instructions.

User acts as a container for saved recipes.

MealPlan (although not used in main) can be used to assign recipes to days—extending functionality.

3. Use of Vectors for Dynamic Storage:

Dynamic arrays via vector allow for scalable handling of ingredients and recipes without predefined limits.

4. Constructor Overloading and Default Constructors:

Several classes use both default constructors and parameterized constructors, showcasing constructor flexibility in C++.

5. Const Correctness in Member Functions:

Functions like display() and getTitle() are marked const, indicating they don't modify the object—an important C++ best practice.

6. User Interaction with I/O:

Combines user input (cin, getline) to build dynamic data structures based on runtime input.

Summary: What’s New / Valuable
Real-world modeling using OOP.

Composition of objects.

Input-driven object creation.

Clear use of vectors and const correctness.

Good design pattern for a mini food/meal planning application.

Limitations:

1.	Lack of Input Validation:

Issue: There is no validation for user input. Entering invalid input (like a letter instead of a number) could cause the program to misbehave or crash.

Improvement: Add checks using cin.fail() and clear the input buffer.

2.	No Persistent Storage:

Issue: All data exists only in memory. Once the program ends, all input is lost.

Improvement: Implement file I/O or a database to save/load user data, recipes, and meal plans.

           3.Single User Support:

Issue: The program only supports one hardcoded user ("Alice").

Improvement: Allow dynamic user creation and login support for multiple users.

4.No Editing or Deletion:

Issue: Recipes and ingredients cannot be edited or deleted once entered.

Improvement: Add functionality to update or remove recipes and ingredients.

5. Minimal Meal Plan Functionality:

Issue: The MealPlan class exists but is not integrated into main() or user interaction.

Improvement: Allow users to assign saved recipes to days of the week and view their meal plan.


6. No Data Encapsulation for Meal Plans:

Issue: Users cannot manage or view meal plans linked to them.

Improvement: Connect MealPlan to the User class, allowing users to manage multiple meal plans.











Conclusion

This C++ program is a functional and cleanly designed introduction to object-oriented programming through a practical recipe management application. With minor enhancements, it can evolve into a full-featured culinary assistant.
