// Without arrow operator
struct point {
    int x, y;
};

void attributes(struct point *p){
    (*p).x = 10;
    (*p).y = 20;
}

// With arrow operator
struct point {
    int x, y;
};

void attributes(struct point *p){
    p->x = 10;
    p->y = 20;
}
