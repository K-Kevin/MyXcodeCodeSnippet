//code
static NSString *kCellID = @"cellID";
UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellID];
if(!cell) {
    cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kCellID];
}
cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;//有右边箭头
cell.selectionStyle = UITableViewCellSelectionStyleNone;//不可点击UITableViewCellSelectionStyleDefault

//xib
static NSString *KCellIdentify = @"CustomCell";
CustomCell *cell = (CustomCell *)[tableView dequeueReusableCellWithIdentifier:KCellIdentify];
if (!cell) {
    cell =  [[[NSBundle mainBundle] loadNibNamed:@"CustomCell" owner:nil options:nil] objectAtIndex:0];
}
