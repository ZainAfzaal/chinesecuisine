#include<iostream>
#include<vector>
using namespace std;




class Dish
{
private:

    string name;
    string category;
    vector<string> ingredients;

public:

    Dish(string name, string category, vector<string> ingredients)
        :name(name), category(category), ingredients(ingredients) {}

    string getName()const
    {
        return name;
    }

    string getCategory()const
    {
        return category;
    }

    vector<string> getIngredients()const
    {
        return ingredients;
    }
};



class type : public Dish
{
public:
    type(string name, string category, vector<string> ingredients)
        : Dish(name, category, ingredients) {}
};

class FamousDish: public Dish
{

private:
    vector<type> dishes;


public:
    FamousDish(string name, string category, vector<string> ingredients, vector<type> dishes)
        :Dish(name,category,ingredients), dishes(dishes) {}

    vector<type> gettype()const
    {
        return dishes;
    }

};

class ChineseCuisine
{
protected:
    string name;
    string characteristics;
    vector<FamousDish> famousdishes;

public:
    ChineseCuisine(string name, string characteristics, vector<FamousDish> famousdishes)
        : name(name), characteristics(characteristics), famousdishes(famousdishes) {}


    string getName()const
    {
        return name;
    }

    string getCharacteristics()const
    {
        return characteristics;
    }

    virtual vector<FamousDish> getfamousdish() const = 0;

    virtual void Detail()const
    {
        cout<<"\nCuisine: "<<name<<"\nCharacteristics: "<<characteristics<<endl;

        for(size_t i=0; i<famousdishes.size(); i++)
        {
            cout<<"*Famous Dish: "<<famousdishes[i].getName();
            cout<<"\n -Category: "<<famousdishes[i].getCategory()<<endl;


            vector<type> dishes = famousdishes[i].gettype();

            for(size_t j=0;  j<dishes.size(); j++)
            {
                cout<<"\n   -Type: "<<dishes[i].getName();
                cout<<"\n   -Category: "<<dishes[i].getCategory();
                vector<string> ingredients = dishes[i].getIngredients();
                for (size_t k=0; k<ingredients.size(); k++){
                    cout<<"\n   -Ingredients: "<<ingredients[k];
                }

                cout<<"\n---------------------------------"<<endl;
            }
        }
    }

};

class CantoneseCuisine : public ChineseCuisine
{
public:
    CantoneseCuisine()
        : ChineseCuisine("CantoneseCuisine", "Mild Seasoning, Sea Food",
    {

        FamousDish("Dim Sum", "Appetizer/Snack", {"Pork, Mushrooms"},
        {
            type("Har Gow Shrimp", "Dumpling", {"Shrimp, Bamboo, Shoots"}),

        })
    }) {}

    vector<FamousDish> getfamousdish() const override
    {
        return famousdishes;
    }
};


class SichuanCuisine : public ChineseCuisine
{
public:
    SichuanCuisine()
        : ChineseCuisine("SichuanCuisine", "Hot and spicy",
    {
        FamousDish("Kung Pao Chicken", "Stir-Fried-Chicken", {"Peanuts, Vegetables, Chicken"},
        {
            type("Chinese Cucumber Salad", "Cold-Appetizer", {"Garlic, Ginger, Soy Sauce"}),

        })
    }) {}

    vector<FamousDish> getfamousdish() const override
    {
        return famousdishes;
    }
};

class ShandongCuisine : public ChineseCuisine
{
public:
    ShandongCuisine()
        : ChineseCuisine("ShandongCuisine", "Known for its emphasis soups and broths.",
    {

        FamousDish("Clam Soup", "Creamy Clam Chowder", {"Potatoes, Cerely, Butter"},
        {
            type("Spring Onion Pancakes", "Pancakes", {"Broth, Cream"}),

        })
    }) {}

    vector<FamousDish> getfamousdish() const override
    {
        return famousdishes;
    }
};




int main()
{

    CantoneseCuisine cantonese;
    cantonese.Detail();

    SichuanCuisine sichuan;
    sichuan.Detail();

    ShandongCuisine shandong;
    shandong.Detail();

    return 0;

}
