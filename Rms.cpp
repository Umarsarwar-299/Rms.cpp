#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Ingredient Class
class Ingredient {
private:
    string name;
    string quantity;

public:
    Ingredient() {}

    Ingredient(string name, string quantity) {
        this->name = name;
        this->quantity = quantity;
    }

    void display() const {
        cout << "  - " << name << ": " << quantity << endl;
    }
};

// Recipe Class
class Recipe {
private:
    string title;
    vector<Ingredient> ingredients;
    string instructions;

public:
    Recipe() {}

    Recipe(string title, string instructions) {
        this->title = title;
        this->instructions = instructions;
    }

    void addIngredient(const Ingredient& ingredient) {
        ingredients.push_back(ingredient);
    }

    void display() const {
        cout << "\nRecipe: " << title << endl;
        cout << "Ingredients:\n";
        for (const auto& ing : ingredients)
            ing.display();
        cout << "Instructions: " << instructions << endl;
    }

    string getTitle() const {
        return title;
    }
};

// User Class
class User {
private:
    string username;
    vector<Recipe> savedRecipes;

public:
    User(string name) {
        username = name;
    }

    void saveRecipe(const Recipe& recipe) {
        savedRecipes.push_back(recipe);
    }

    void showSavedRecipes() const {
        cout << "\nSaved Recipes for " << username << ":\n";
        for (const auto& recipe : savedRecipes)
            recipe.display();
    }
};

// MealPlan Class
class MealPlan {
private:
    string day;
    Recipe recipe;

public:
    MealPlan() {}

    MealPlan(string d, Recipe r) : day(d), recipe(r) {}

    void display() const {
        cout << "\nMeal Plan for " << day << ":\n";
        recipe.display();
    }
};

// Main function
int main() {
    User user("Alice");

    int numRecipes;
    cout << "How many recipes do you want to add? ";
    cin >> numRecipes;
    cin.ignore();

    for (int i = 0; i < numRecipes; i++) {
        string title, instructions;
        int numIngredients;

        cout << "\nEnter recipe title: ";
        getline(cin, title);

        cout << "Enter instructions: ";
        getline(cin, instructions);

        Recipe recipe(title, instructions);

        cout << "How many ingredients? ";
        cin >> numIngredients;
        cin.ignore();

        for (int j = 0; j < numIngredients; j++) {
            string ingName, ingQty;
            cout << "Ingredient name: ";
            getline(cin, ingName);
            cout << "Ingredient quantity: ";
            getline(cin, ingQty);
            recipe.addIngredient(Ingredient(ingName, ingQty));
        }

        user.saveRecipe(recipe);
    }

    user.showSavedRecipes();

    return 0;
}