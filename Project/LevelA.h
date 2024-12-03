#include "Scene.h"

class LevelA : public Scene {
public:
    int ENEMY_COUNT = 3;
    GLuint A_font_texture_id;
    
    glm::vec3 message_pos;
    glm::vec3 life_pos;
    
    float view_x,
          view_y;
    
    float left_edge = 10.0f;
    float bottom_edge = -12.0f;
    float right_edge = 39.5f;
    float top_edge = -7.0f;
    
    ~LevelA();
    
    void initialise(ShaderProgram *program) override;
    void update(float delta_time) override;
    void render(ShaderProgram *program) override;
};
