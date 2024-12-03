#include "Scene.h"

class LevelB : public Scene {
public:
    int ENEMY_COUNT = 3;
    GLuint B_font_texture_id;
    glm::vec3 message_pos;
    
    ~LevelB();
    
    void initialise(ShaderProgram *program) override;
    void update(float delta_time) override;
    void render(ShaderProgram *program) override;
};
