# Rms.cpp
Recipe Management system
C++ Program Report: Recipe Management System
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











Conclusion

This C++ program is a functional and cleanly designed introduction to object-oriented programming through a practical recipe management application. With minor enhancements, it can evolve into a full-featured culinary assistant.



Let me know if you need a PDF version or enhancements like diagrams or file handling!

4o

