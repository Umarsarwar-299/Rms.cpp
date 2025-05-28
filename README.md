# Rms.cpp
# Recipe Management System (RMS.cpp)

## Overview

This C++ program implements a simple **Recipe Management System** that allows a user to input multiple recipes, store their ingredients and instructions, and display the saved recipes. It uses object-oriented programming principles like **encapsulation**, **composition**, and **abstraction**.

---

## Functionality

### ✅ User Input
- Prompts the user for the number of recipes to add.
- For each recipe, it collects:
  - Title
  - Instructions
  - A list of ingredients

### ✅ Storage
- Recipes and ingredients are stored in custom classes: `Recipe`, `Ingredient`.
- A `User` class manages saved recipes.

### ✅ Display
- Displays all saved recipes with formatted output, including:
  - Ingredients
  - Cooking instructions

---

## Class Descriptions

### 1. Ingredient

- **Attributes:**
  - `name`: Name of the ingredient
  - `quantity`: Quantity required

- **Methods:**
  - Constructor for initialization
  - `display()`: Outputs the ingredient in a readable format

---

### 2. Recipe

- **Attributes:**
  - `title`: Recipe title
  - `instructions`: Preparation steps
  - `ingredients`: A vector of `Ingredient` objects

- **Methods:**
  - Constructor for initialization
  - `addIngredient()`: Adds an ingredient
  - `display()`: Prints the recipe with ingredients and instructions
  - `getTitle()`: Returns the recipe title

---

### 3. User

- **Attributes:**
  - `username`: Name of the user
  - `savedRecipes`: A vector of recipes

- **Methods:**
  - Constructor for initialization
  - `saveRecipe()`: Adds a recipe
  - `showSavedRecipes()`: Displays all saved recipes

---

### 4. MealPlan

- **Attributes:**
  - `day`: Day of the week
  - `recipe`: Associated recipe

- **Methods:**
  - Constructor
  - `display()`: Shows meal plan information

> **Note:** Currently unused in `main()`, but can be integrated.

---

## Strengths

- ✅ Demonstrates OOP concepts effectively
- ✅ Well-structured and easy to understand
- ✅ Interactive and user-friendly
- ✅ Scalable for additional features (e.g., meal planning, nutrition info)

---

## Suggestions for Improvement

### 🔁 MealPlan Integration
- Include creation and display of meal plans in `main()`

### ⚠️ Error Handling
- Add validation (e.g., numeric checks, `cin.fail()`)

### 💾 Persistence
- Implement file I/O for saving/loading recipes

### 🍽️ Ingredient Class Enhancement
- Separate fields for quantity and units

### 🧭 UI Improvements
- Add menu options (view, add, delete recipes)

### 📂 Modularity
- Split code into multiple files

---

## Key Features

### 🧱 Composition
- `Recipe` has multiple `Ingredient` objects  
- `User` has multiple `Recipe` objects  
- `MealPlan` has a `Recipe`

### 🧩 Class Interaction & Modularity
- `Ingredient`: Handles ingredient data  
- `Recipe`: Combines ingredients and instructions  
- `User`: Stores saved recipes  
- `MealPlan`: Assigns recipes to days (future integration)

### 📈 Use of Vectors
- Dynamic storage using `std::vector` for scalability

### 🔄 Constructor Overloading
- Classes use both default and parameterized constructors

### ✅ Const Correctness
- Functions like `display()` and `getTitle()` are marked `const`

### 👨‍🍳 User Interaction
- Uses `cin`, `getline()` for real-time data creation

---

## Summary

### ✅ What’s New / Valuable
- Real-world modeling using OOP
- Composition of objects
- Input-driven object creation
- Clear use of vectors and `const`
- Solid base for a mini food/meal planning app

---

## Limitations

1. **Lack of Input Validation**  
   - **Issue**: No checks for invalid input  
   - **Improvement**: Use `cin.fail()` and buffer clearing

2. **No Persistent Storage**  
   - **Issue**: All data is in-memory only  
   - **Improvement**: Implement file or database support

3. **Single User Support**  
   - **Issue**: Hardcoded user ("Alice")  
   - **Improvement**: Allow user creation and login

4. **No Editing or Deletion**  
   - **Issue**: Cannot modify or delete entries  
   - **Improvement**: Add update/remove functions

5. **Minimal Meal Plan Functionality**  
   - **Issue**: `MealPlan` class not integrated  
   - **Improvement**: Assign recipes to days of the week

6. **No Meal Plan Data Encapsulation**  
   - **Issue**: Users can't manage/view their meal plans  
   - **Improvement**: Link `MealPlan` to the `User` class

---

## Conclusion

This C++ program is a functional and cleanly designed introduction to object-oriented programming through a practical **recipe management application**. With minor enhancements, it can evolve into a **full-featured culinary assistant**.

