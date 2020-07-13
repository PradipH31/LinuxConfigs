const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#010709", /* black   */
  [1] = "#27556A", /* red     */
  [2] = "#455C56", /* green   */
  [3] = "#C4A64F", /* yellow  */
  [4] = "#366D8B", /* blue    */
  [5] = "#447891", /* magenta */
  [6] = "#4F8BA9", /* cyan    */
  [7] = "#aacdd9", /* white   */

  /* 8 bright colors */
  [8]  = "#768f97",  /* black   */
  [9]  = "#27556A",  /* red     */
  [10] = "#455C56", /* green   */
  [11] = "#C4A64F", /* yellow  */
  [12] = "#366D8B", /* blue    */
  [13] = "#447891", /* magenta */
  [14] = "#4F8BA9", /* cyan    */
  [15] = "#aacdd9", /* white   */

  /* special colors */
  [256] = "#010709", /* background */
  [257] = "#aacdd9", /* foreground */
  [258] = "#aacdd9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
