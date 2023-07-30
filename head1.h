#ifndef UUID2296085874144
#define UUID2296085874144

/**
  * RandomForestClassifier(base_estimator=DecisionTreeClassifier(), bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=None, max_features=auto, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=10, n_jobs=None, num_outputs=7, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier1 {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            uint16_t votes[7] = { 0 };
            uint8_t classIdx = 0;
            float classScore = 0;

            
                tree0(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree1(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree2(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree3(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree4(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree5(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree6(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree7(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree8(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree9(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            

            // return argmax of votes
            uint8_t maxClassIdx = 0;
            float maxVote = votes[0];

            for (uint8_t i = 1; i < 7; i++) {
                if (votes[i] > maxVote) {
                    maxClassIdx = i;
                    maxVote = votes[i];
                }
            }

            predictedValue = maxClassIdx;

                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            
            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            

        
            
                /**
                 * Random forest's tree #0
                 */
                void tree0(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[6] <= 3.5) {
                            
                                
                        if (x[7] <= 4.0) {
                            
                                
                        *classIdx = 6;
                        *classScore = 17.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[1] <= 69.0) {
                            
                                
                        if (x[0] <= 28.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 13.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[3] <= 3.5) {
                            
                                
                        if (x[1] <= 63.5) {
                            
                                
                        *classIdx = 5;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 13.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 13.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 11.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 53.0) {
                            
                                
                        *classIdx = 2;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[6] <= 11.5) {
                            
                                
                        *classIdx = 1;
                        *classScore = 6.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 66.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 1.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #1
                 */
                void tree1(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[7] <= 4.0) {
                            
                                
                        *classIdx = 6;
                        *classScore = 20.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 34.5) {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[5] <= 9.5) {
                            
                                
                        if (x[4] <= 3.5) {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 4.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 8.5) {
                            
                                
                        if (x[2] <= 34.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[3] <= 1.5) {
                            
                                
                        *classIdx = 0;
                        *classScore = 2.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 2.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 3.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 6.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 7.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 10.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 6.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 12.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #2
                 */
                void tree2(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[7] <= 34.0) {
                            
                                
                        if (x[7] <= 28.5) {
                            
                                
                        if (x[5] <= 29.0) {
                            
                                
                        if (x[6] <= 5.0) {
                            
                                
                        if (x[4] <= 3.5) {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 52.5) {
                            
                                
                        if (x[5] <= 17.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[2] <= 32.0) {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[2] <= 31.0) {
                            
                                
                        *classIdx = 0;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 6;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 15.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #3
                 */
                void tree3(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[7] <= 4.5) {
                            
                                
                        *classIdx = 6;
                        *classScore = 13.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 0.5) {
                            
                                
                        if (x[2] <= 45.5) {
                            
                                
                        *classIdx = 4;
                        *classScore = 9.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 6.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 34.5) {
                            
                                
                        if (x[0] <= 30.5) {
                            
                                
                        if (x[1] <= 51.0) {
                            
                                
                        if (x[7] <= 13.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 6.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[6] <= 3.5) {
                            
                                
                        if (x[7] <= 16.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 13.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 9.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[6] <= 13.5) {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 6.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 12.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 26.5) {
                            
                                
                        if (x[1] <= 63.5) {
                            
                                
                        *classIdx = 4;
                        *classScore = 9.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 16.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 13.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 9.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #4
                 */
                void tree4(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[5] <= 28.5) {
                            
                                
                        if (x[7] <= 16.0) {
                            
                                
                        if (x[7] <= 11.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 17.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[6] <= 5.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 17.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 7.5) {
                            
                                
                        *classIdx = 0;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 2.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 34.0) {
                            
                                
                        if (x[1] <= 53.0) {
                            
                                
                        *classIdx = 4;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 28.5) {
                            
                                
                        if (x[7] <= 21.5) {
                            
                                
                        *classIdx = 0;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 12.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 6;
                        *classScore = 17.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #5
                 */
                void tree5(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[7] <= 4.5) {
                            
                                
                        *classIdx = 6;
                        *classScore = 16.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[7] <= 35.0) {
                            
                                
                        if (x[0] <= 25.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 24.5) {
                            
                                
                        if (x[6] <= 6.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 14.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 5.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 9.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #6
                 */
                void tree6(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[1] <= 51.0) {
                            
                                
                        if (x[4] <= 1.0) {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[3] <= 1.5) {
                            
                                
                        *classIdx = 0;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 3.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 4.0) {
                            
                                
                        *classIdx = 6;
                        *classScore = 17.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 34.5) {
                            
                                
                        if (x[4] <= 8.5) {
                            
                                
                        if (x[6] <= 4.0) {
                            
                                
                        if (x[1] <= 52.5) {
                            
                                
                        if (x[2] <= 40.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 12.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 17.0) {
                            
                                
                        *classIdx = 3;
                        *classScore = 12.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 11.5) {
                            
                                
                        *classIdx = 1;
                        *classScore = 8.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 3.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[6] <= 8.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 12.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 4.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 8.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 14.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #7
                 */
                void tree7(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[5] <= 30.0) {
                            
                                
                        if (x[4] <= 3.5) {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[3] <= 3.5) {
                            
                                
                        if (x[7] <= 34.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 3.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[2] <= 41.0) {
                            
                                
                        if (x[2] <= 30.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 3.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 4.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[2] <= 29.0) {
                            
                                
                        if (x[1] <= 57.0) {
                            
                                
                        *classIdx = 5;
                        *classScore = 15.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 17.0) {
                            
                                
                        if (x[2] <= 56.5) {
                            
                                
                        if (x[2] <= 49.5) {
                            
                                
                        if (x[4] <= 5.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 16.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 12.5) {
                            
                                
                        if (x[5] <= 11.0) {
                            
                                
                        *classIdx = 2;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 16.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 26.0) {
                            
                                
                        if (x[7] <= 17.0) {
                            
                                
                        *classIdx = 2;
                        *classScore = 4.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 9.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 3.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 16.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 6;
                        *classScore = 11.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #8
                 */
                void tree8(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[4] <= 2.5) {
                            
                                
                        if (x[5] <= 18.0) {
                            
                                
                        if (x[5] <= 9.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[3] <= 3.0) {
                            
                                
                        *classIdx = 6;
                        *classScore = 15.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 13.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[6] <= 3.5) {
                            
                                
                        if (x[5] <= 29.5) {
                            
                                
                        if (x[5] <= 17.5) {
                            
                                
                        if (x[7] <= 25.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 11.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 13.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 6;
                        *classScore = 15.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 9.0) {
                            
                                
                        if (x[7] <= 23.0) {
                            
                                
                        *classIdx = 0;
                        *classScore = 3.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 7.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 17.0) {
                            
                                
                        *classIdx = 2;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 9.0) {
                            
                                
                        *classIdx = 1;
                        *classScore = 7.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 3.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #9
                 */
                void tree9(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[7] <= 33.5) {
                            
                                
                        if (x[7] <= 4.5) {
                            
                                
                        *classIdx = 6;
                        *classScore = 9.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[7] <= 15.5) {
                            
                                
                        if (x[0] <= 30.5) {
                            
                                
                        if (x[5] <= 6.5) {
                            
                                
                        *classIdx = 0;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[1] <= 52.5) {
                            
                                
                        if (x[2] <= 35.5) {
                            
                                
                        *classIdx = 2;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[4] <= 6.5) {
                            
                                
                        *classIdx = 3;
                        *classScore = 10.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 2;
                        *classScore = 5.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[3] <= 0.5) {
                            
                                
                        *classIdx = 1;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[5] <= 16.5) {
                            
                                
                        if (x[7] <= 24.0) {
                            
                                
                        *classIdx = 0;
                        *classScore = 5.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 5.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 4;
                        *classScore = 6.0;
                        return;

                            
                        }

                            
                        }

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 5;
                        *classScore = 26.0;
                        return;

                            
                        }

                }
            
        


            
};



static RandomForestClassifier1 blobClassifie;


#endif
