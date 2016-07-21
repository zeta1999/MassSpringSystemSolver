#ifndef SPRINGS2D_MASSSPRINGSYSTEM_H
#define SPRINGS2D_MASSSPRINGSYSTEM_H

#include "Drawable.h"
#include "Shape.h"
#include "VertexObject.h"
#include "Nodes.h"
#include "Springs.h"
#include <utility>
#include "SOM.h"

class MassSpringSystem : public ga::Drawable {
public:
    MassSpringSystem();

    void load_file(std::string file);

    void init_shape();

    void init_instances();

    void init_drawable();

    void draw();

    void move();

    void gather();

private:
    Nodes nodes;
    Springs springs;
    ga::VAOMassSpring vao;
    SOM sm;

};


#endif //SPRINGS2D_MASSSPRINGSYSTEM_H
