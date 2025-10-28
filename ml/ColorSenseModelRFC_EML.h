


    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

static const EmlTreesNode color_sense_nodes[37] = {
  { 4, 22668, 1, -1 },
  { 2, 2859, -2, 1 },
  { 0, 7454, -3, 1 },
  { 0, 23930, -4, -1 },
  { 0, 23930, 1, -1 },
  { 0, 4324, -2, 1 },
  { 0, 7454, -3, -4 },
  { 2, 17769, 1, -1 },
  { 2, 4160, -2, 1 },
  { 2, 12048, 1, -4 },
  { 0, 9111, -3, -4 },
  { 4, 19886, 1, -1 },
  { 3, 29, -2, 1 },
  { 4, 10509, 1, 2 },
  { 3, 43, -3, -4 },
  { 0, 14173, -3, -4 },
  { 0, 23930, 1, -1 },
  { 0, 4692, -2, 1 },
  { 1, 13968, -4, -3 },
  { 0, 25218, 1, -1 },
  { 2, 3553, -2, 1 },
  { 0, 8374, -3, -4 },
  { 4, 21380, 1, -1 },
  { 2, 3813, -2, 1 },
  { 0, 8650, -3, 1 },
  { 1, 13623, -4, -1 },
  { 2, 17769, 1, -1 },
  { 2, 2859, -2, 1 },
  { 2, 8233, -4, 1 },
  { 2, 11701, -3, -4 },
  { 2, 20283, 1, -1 },
  { 2, 2859, -2, 1 },
  { 1, 12675, -4, -3 },
  { 0, 23930, 1, -1 },
  { 3, 34, -2, 1 },
  { 2, 7973, -4, 1 },
  { 2, 11701, -3, -4 } 
};

static const int32_t color_sense_tree_roots[10] = { 0, 4, 7, 11, 16, 19, 22, 26, 30, 33 };

static const uint8_t color_sense_leaves[16] = { 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 255, 0, 0, 255, 0, 0 };

EmlTrees color_sense = {
        37,
        (EmlTreesNode *)(color_sense_nodes),	  
        10,
        (int32_t *)(color_sense_tree_roots),
        16,
        (uint8_t *)(color_sense_leaves),
        8,
        5,
        4,
    };

int32_t color_sense_predict(const int16_t *features, int32_t features_length) {

        const int out = eml_trees_predict(&color_sense, features, features_length);
        return out;

    }
    

int color_sense_predict_proba(const int16_t *features, int32_t features_length, float *out, int out_length) {

        const EmlError err =eml_trees_predict_proba(&color_sense, features, features_length, out, out_length);
        return err;

    }
    