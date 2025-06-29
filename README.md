I'm Zain Afzaal.
<br>
I'm a student.
<br>
I made the project using c++ on the topic ("Chinese Cuisine").

*Overview
**Classes
  -Dish
    Attributes:
         name: represent the name of dish.
         category: represent the category.
         ingredients: list of ingredients used in dish.
    Methods:

         getname(),getcategory(),getingredients(),
         which return both name,category,ingredients.

  -type
    derived class of Dish.
    It represent types of dish.

  -FamousDish
    Also derived from Dish.
    It represent a famous dish form each cousine having its multiple types.
    
    Attributes:
         dishes: represent the list of types.
    Methods:
         gettype(),
         for return type
.
  -ChineseCuisine
    General Class.
    Attributes:
         name: represent the anme of cousine
         characteristics: its characteristics
         famousdishes: some famous dishes in this cuisine

    Methods:
         getname(),getcharacteristic(),getfamousdishes
         getdetail(),which give the detail about cuisine, including theor famous dishes and their types.
   

  -cantonesecuisine:
  -shandongcuisine:
  -sichuancuisine:
       Both are derived classes or inherit from base chinesecuisine.

     constructor:
        initialize with famousdishes and characteristics.

Main Function:
   there are three cuisine objects,
   and the method Detail() is call for each object.
   







