/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * NewJPanel.java
 *
 * Created on Nov 17, 2010, 2:21:07 PM
 */

/**
 *
 * @author tyhollan
 */
public class NewJPanel extends javax.swing.JPanel {

    /** Creates new form NewJPanel */
    public NewJPanel() {
        initComponents();
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();

        setName("Form"); // NOI18N

        jScrollPane1.setName("jScrollPane1"); // NOI18N

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {"1", "CPE102", "1", "5", "Never", "Check Boxes", "", null, "None"},
                {"2", "CPE102", "3", "15", "Never", "Drawn Answer", null, null, "None"},
                {"3", "CPE102", "4", "15", "Never", "Essay", null, null, "None"},
                {"4", "CPE102", "2", "5", "Never", "Fill in the Blank", null, null, "None"},
                {"5", "CPE102", "4", "6", "Never", "Matching", null, null, "None"},
                {"6", "CPE102", "5", "5", "Never", "Multiple Choice", null, null, "None"},
                {"7", "CPE102", "2", "4", "Never", "Point and Click", null, null, "None"},
                {"8", "CPE102", "5", "20", "Never", "Programming", null, null, "None"},
                {"9", "CPE102", "3", "5", "Never", "Short Answer", null, null, "None"},
                {"10", "CPE102", "1", "2", "Never", "True/False", null, null, null},
                {"11", "", null, null, null, null, null, null, null},
                {"12", "", null, null, null, null, null, null, null},
                {"13", "", null, null, null, null, null, null, null},
                {"14", "", null, null, null, null, null, null, null},
                {"15", "", null, null, null, null, null, null, null},
                {"16", "", null, null, null, null, null, null, null},
                {"17", "", null, null, null, null, null, null, null},
                {"18", "", null, null, null, null, null, null, null},
                {"19", "", null, null, null, null, null, null, null}
            },
            new String [] {
                "#", "Class", "Difficulty", "Time Allowed", "Last Used", "Type of Question", "Question", "Answer", "HTML File"
            }
        ));
        jTable1.setAutoResizeMode(javax.swing.JTable.AUTO_RESIZE_ALL_COLUMNS);
        jTable1.setName("jTable1"); // NOI18N
        jTable1.setPreferredSize(new java.awt.Dimension(600, 300));
        jTable1.setRowHeight(20);
        jScrollPane1.setViewportView(jTable1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 824, Short.MAX_VALUE)
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(layout.createSequentialGroup()
                    .addContainerGap()
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 804, Short.MAX_VALUE)
                    .addContainerGap()))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 418, Short.MAX_VALUE)
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(layout.createSequentialGroup()
                    .addContainerGap()
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 396, Short.MAX_VALUE)
                    .addContainerGap()))
        );
    }// </editor-fold>//GEN-END:initComponents


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    // End of variables declaration//GEN-END:variables

}
