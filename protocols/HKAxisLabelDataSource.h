/* Generated by RuntimeBrowser.
 */

@protocol HKAxisLabelDataSource <NSObject>

@required

- (NSArray *)labelsForChartRange:(struct HKRange { float x1; float x2; })arg1 zoomScale:(float)arg2;
- (struct CGPoint { float x1; float x2; })renderPositionForLabel:(HKAxisLabel *)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 constantOffset:(float)arg5 isHorizontal:(BOOL)arg6;

@end
